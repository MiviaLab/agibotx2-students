# Esempi dell'SDK — cosa fanno e come usarli

Gli esempi sono in `~/aimdk/src/py_examples/py_examples/` (Python) e `~/aimdk/src/examples/src/` (C++).
Quasi tutti esistono in entrambe le versioni con lo stesso nome:

```bash
ros2 run py_examples <nome>     # versione Python
ros2 run examples <nome>        # versione C++
```

Prima di tutto, **in ogni nuovo terminale**:

```bash
source ~/aimdk/install/local_setup.bash
```

> **Sicurezza.** I 3 esempi di movimento della sezione 2 (`head_control`, `arm_control`,
> `preset_motion_client`) muovono il robot. Lanciateli solo con il docente
> presente e con il robot in piedi in un punto libero. Per fermare un esempio: `Ctrl+C`.
> Lanciate un nodo alla volta (al massimo 2 al secondo): troppi nodi insieme possono far perdere
> l'equilibrio al robot.
>
> **Non provate mai a far camminare il robot o a muovere le gambe**, né con gli esempi né con
> codice vostro (topic di locomozione, comandi diretti ai giunti delle gambe, animazioni a corpo
> intero). Potete muovere solo testa e braccia, nei modi descritti in questa guida.

---

## 1. Modalità del robot

Il robot ha diverse **modalità di controllo**: per muovere testa o braccia serve la modalità giusta.

### Le uniche modalità permesse

Per motivi di sicurezza potete usare **solo queste tre** modalità:

| Sigla | Modalità | A cosa serve |
|---|---|---|
| `SD` | `STAND_DEFAULT` | in piedi stabile, il robot tiene l'equilibrio da solo |
| `HO` | `HEAD_ONLY` | controllo della testa |
| `URS` | `UPPERBODY_REMOTE_SPLIT` | controllo delle braccia |

**Non provate altre modalità** (anche se le trovate nella documentazione): **fanno cadere il robot**.

### In che ordine

1. Si parte **sempre da `SD`**.
2. Da `SD` si passa a `HO` (testa) **oppure** a `URS` (braccia).
3. Per passare da `HO` a `URS`, o viceversa, **si torna prima a `SD`**:
   `SD → HO → SD → URS → SD`.
4. Alla fine si torna a `SD`.

**I 3 esempi di movimento della sezione 2 (`head_control`, `arm_control`,
`preset_motion_client`) fanno già tutta questa sequenza da soli**: di solito non dovete
cambiare modalità a mano. Se scrivete codice vostro, rispettate lo stesso ordine (copiate la
funzione `set_mode` da `head_control` o `arm_control`).

### Vedere o cambiare la modalità a mano

| Esempio | Cosa fa | Uso |
|---|---|---|
| `get_mc_action` | stampa la modalità attuale (es. `STAND_DEFAULT`) | `ros2 run py_examples get_mc_action` |
| `set_mc_action` | cambia modalità (accetta solo `SD`, `HO`, `URS`) | `ros2 run py_examples set_mc_action SD` |

`set_mc_input_source` e `get_current_input_source` gestiscono quale programma ha il controllo del
robot (uso avanzato, vedi documentazione 5.1.3).

---

## 2. Muovere testa e braccia

Questi sono i **3 esempi di movimento**: `head_control`, `arm_control` e `preset_motion_client`.
Tutti e tre mettono il robot in `STAND_DEFAULT` all'inizio, passano da soli alla modalità giusta
e tornano a `STAND_DEFAULT` alla fine (vedi sezione 1).

### `head_control` — girare la testa (destra/sinistra)

```bash
ros2 run py_examples head_control 0.2
```

- Argomento: angolo di **yaw** in radianti, da `-0.366` a `0.366` (default `0`, testa al centro).
  Valori fuori intervallo vengono limitati.
- Sequenza: `STAND_DEFAULT` → `HEAD_ONLY` → tiene la testa nella posizione finché premete
  `Ctrl+C` → `STAND_DEFAULT`.

### `arm_control` — mettere le braccia in una posizione

```bash
ros2 run py_examples arm_control 0.39 0 0 -1.17 0 0 0  0.39 0 0 -1.17 0 0 0
```

- Argomenti: **14 angoli in radianti**, prima i 7 del braccio sinistro e poi i 7 del destro,
  in quest'ordine: `shoulder_pitch shoulder_roll shoulder_yaw elbow wrist_yaw wrist_pitch wrist_roll`.
- Senza argomenti tutti i giunti vanno a `0` (gomiti distesi). Con argomenti sbagliati stampa
  l'elenco dei giunti con i limiti.
- La riga d'esempio qui sopra è la posizione normale delle braccia in piedi: partite da lì e
  cambiate **un valore alla volta**, di poco.
- Sequenza: `STAND_DEFAULT` → `UPPERBODY_REMOTE_SPLIT` → tiene la posizione finché premete
  `Ctrl+C` → `STAND_DEFAULT` (le braccia tornano in posizione normale).

### `preset_motion_client` — gesti predefiniti delle braccia

```bash
ros2 run py_examples preset_motion_client
```

Chiede il braccio (1 sinistro, 2 destro, 3 entrambi) e il numero del gesto; poi il gesto viene
eseguito e il braccio torna in posizione da solo.

| Numero | Gesto | Braccio |
|---|---|---|
| 1001 | alzare la mano | 1, 2 |
| 1002 | salutare | 1, 2 |
| 1003 | stretta di mano | 1, 2 |
| 1004 | bacio | 1, 2 |
| 1007 | cuore | 1, 2, 3 |
| 1008 | batti cinque | 1, 2 |
| 1010 | alzare la mano | 1, 2, 3 |
| 1011 | salutare vicino al petto | 1, 2 |
| 1013 | saluto militare | 1, 2 |

---

## 3. Camere e sensori

Questi esempi **leggono** soltanto: non muovono il robot.

| Esempio | Cosa legge | Uso |
|---|---|---|
| `echo_camera_rgbd` | camera RGB-D frontale (colore e profondità) | `ros2 run py_examples echo_camera_rgbd --ros-args -p topic_type:=rgb_image` |
| `echo_camera_stereo` | camere stereo frontali | `... --ros-args -p topic_type:=left_rgb_image` |
| `echo_camera_head_rear` | camera posteriore della testa | `... --ros-args -p topic_type:=rgb_image` |
| `take_photo` | salva un'immagine `.png` della camera stereo sinistra nella cartella `images/` | `ros2 run py_examples take_photo` |
| `echo_lidar_data` | lidar del petto (punti o IMU) | `... --ros-args -p topic_type:=pointcloud` |
| `echo_head_touch_sensor` | sensore di tocco sulla testa | `ros2 run py_examples echo_head_touch_sensor` |
| `echo_imu_data` | IMU (accelerazioni e rotazioni) | `ros2 run examples echo_imu_data` |
| `echo_gnss_data` | GPS | `ros2 run examples echo_gnss_data` |

Per gli esempi delle camere, i valori possibili di `topic_type` sono scritti all'inizio del file
sorgente. Per **vedere** le immagini è più comodo Foxglove (README, sezione 6).

### `yolo_detection` — riconoscere oggetti con la camera (solo Python)

```bash
ros2 run py_examples yolo_detection
```

Prende le immagini della camera frontale, riconosce gli oggetti con il modello YOLO (sulla GPU) e
pubblica le immagini con i riquadri sul topic `/yolo/image/compressed`: apritelo in Foxglove con
un pannello **Image**. Ogni 5 secondi stampa i frame al secondo e gli oggetti trovati.

Parametri utili (`--ros-args -p nome:=valore`):

- `conf:=0.5` soglia di confidenza (default `0.25`): più alta = meno riquadri ma più sicuri;
- `input_topic:=/aima/hal/sensor/rgbd_head_front/rgb_image/compressed` per usare la camera RGB-D
  (in quel caso aggiungete `-p decode_scale:=1`);
- `model:=...` altro file di pesi YOLO.

---

## 4. Audio

| Esempio | Cosa fa | Uso |
|---|---|---|
| `play_tts` | il robot dice una frase | `ros2 run py_examples play_tts "Ciao a tutti"` |
| `play_audio` | riproduce un file audio | `ros2 run py_examples play_audio` (chiede il percorso; Invio = file di prova predefinito) |
| `play_audio_stream` | riproduce un file audio grezzo (PCM 16 kHz) inviandolo a pezzi | `... --ros-args -p raw_audio_path:=<file>` |
| `get_mic_source` | dice quale microfono è attivo (interno o esterno) | `ros2 run py_examples get_mic_source` |
| `set_mic_source` | sceglie il microfono | `ros2 run py_examples set_mic_source int` (o `ext`) |
| `mic_receiver` | salva in `audio_recordings/` le frasi rilevate dal robot (file `.pcm`) | `ros2 run py_examples mic_receiver` |
| `mic_raw_receiver` | salva l'audio grezzo di tutti i canali del microfono (file `.pcm`) | `ros2 run py_examples mic_raw_receiver` |

I file `.pcm` non hanno intestazione: si aprono per esempio con Audacity
(*File → Importa → Dati grezzi*, 16 bit con segno, 16000 Hz, 1 canale).

### `audio_transcriber` — trascrivere quello che si dice al robot (solo Python)

```bash
ros2 run py_examples audio_transcriber
```

Parlate vicino alla testa del robot. Per ogni frase rilevata:

1. salva un file `.wav` (lo potete ascoltare mentre il programma gira: la cartella è scritta
   all'avvio; **viene cancellata quando chiudete il programma**);
2. trascrive la frase con Whisper (sulla GPU) e la stampa;
3. pubblica il testo sul topic `/audio/transcription` (in Foxglove: pannello **Raw Messages**).

Parametri: `-p language:=en` per un'altra lingua (default `it`), `-p model:=base` per un modello
più veloce ma meno preciso (default `small`). La prima volta il modello viene scaricato (qualche
minuto).

---

## 5. Display e luci

| Esempio | Cosa fa | Uso |
|---|---|---|
| `play_emoji` | mostra un'espressione sul display del viso | `ros2 run py_examples play_emoji` (chiede numero e modalità) |
| `play_video` | riproduce un video sul display | `ros2 run py_examples play_video` |
| `play_lights` | cambia colore ed effetto della striscia LED | `ros2 run py_examples play_lights` (chiede la modalità 0-3 e il colore) |

---

## 6. Diagnostica

| Esempio | Cosa fa | Uso |
|---|---|---|
| `hds_diagnostics` | mostra in tempo reale allarmi e diagnostica del robot, o lo storico | `ros2 run py_examples hds_diagnostics echo` / `... history` |
| `migrate_system_state` | cambia lo stato di sistema del robot | **non usare** senza il docente |

---

## Usare un esempio come punto di partenza

1. Copiate il file nella vostra cartella, per esempio:
   `cp ~/aimdk/src/py_examples/py_examples/head_control.py ~/<vostra_cartella>/`
2. Modificatelo e lanciatelo direttamente con Python:
   `python3 ~/<vostra_cartella>/head_control.py 0.1`
3. Non modificate gli esempi originali in `~/aimdk`: servono a tutti.