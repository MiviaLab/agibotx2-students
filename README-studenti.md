# Sviluppare sul robot AgiBot X2 — istruzioni per gli studenti

Lavorerete in un **container** sull'unità di sviluppo del robot: un ambiente Ubuntu 22.04 con
ROS 2 Humble, l'SDK AimDK, la GPU e l'accesso ai topic e servizi del robot. Il container è
vostro: potete installare pacchetti e sperimentare senza rischiare di rompere il robot.

Documentazione ufficiale dell'SDK: <https://x2-aimdk.agibot.com> (scegliere la versione del robot),
oppure in locale in `~/aimdk/docs`.

---

## 1. Collegarsi

1. Collegate il PC alla Wi-Fi del laboratorio **MiviaLab**.
2. Aprite un terminale (Linux/macOS: Terminale; Windows: PowerShell) e collegatevi:

   ```bash
   ssh -p 2222 studente@10.0.10.201
   ```

   - Password: `mivia`
   - Al primo collegamento rispondete `yes` alla domanda sull'impronta della chiave.
3. Siete **dentro il container**, nella cartella `/home/studente`. Lo riconoscete dal
   messaggio di benvenuto e dal prompt `(container-studenti)studente@agi:~$`
   (`agi` è il nome della macchina: il container ne condivide la rete, ma non i file). Per uscire: `exit`
   (il container resta acceso; i vostri file restano).

### Comodo: configurazione SSH

Nel file `~/.ssh/config` del vostro PC (su Windows `C:\Users\<voi>\.ssh\config`):

```
Host agibot
    HostName 10.0.10.201
    Port 2222
    User studente
```

Da quel momento basta `ssh agibot`.

### VS Code

1. Installate l'estensione **Remote - SSH**.
2. `F1` → *Remote-SSH: Connect to Host…* → `agibot` (serve la configurazione SSH qui sopra).
3. Al primo collegamento VS Code chiede il sistema operativo della macchina remota: scegliete **Linux**.
4. Inserite la password (`mivia`).
5. *File → Open Folder…*, scrivete `/home/studente` e confermate (se richiesto, reinserite la
   password). Le volte successive la cartella compare tra quelle recenti.

Ora VS Code mostra i file del container e il suo terminale integrato (*Terminal → New Terminal*)
è già dentro il container.

---

## 2. Cosa trovate

| Percorso | Contenuto |
|---|---|
| `~/ESEMPI.md` | guida agli esempi: cosa fanno e come usarli |
| `~/aimdk` | la vostra copia dell'SDK AimDK |
| `~/aimdk/src/aimdk_msgs` | messaggi e servizi del robot (**non modificare**) |
| `~/aimdk/src/examples` | esempi C++ |
| `~/aimdk/src/py_examples` | esempi Python |
| `~/aimdk/topics_and_services` | elenco dei topic e servizi disponibili |
| `~/aimdk/docs` | documentazione locale |
| `~/foxglove` | script per visualizzare i dati del robot con Foxglove (vedi sezione 6) |

La home `/home/studente` è **condivisa da tutti** gli studenti che usano questo account:
lavorate ognuno in una cartella vostra e non cancellate il lavoro degli altri.

---

## 3. Caricare l'SDK

L'SDK è già compilato: non serve ricompilarlo. **In ogni nuovo terminale** caricate l'ambiente
(ROS è già caricato in automatico):

```bash
source ~/aimdk/install/local_setup.bash
```

---

## 4. Provare che tutto funzioni

```bash
ros2 topic list                                        # topic del robot
ros2 interface package aimdk_msgs                      # messaggi dell'SDK
ros2 topic echo --once /aima/hal/joint/arm/state       # stato dei giunti del braccio
ros2 run py_examples play_tts                          # esempio Python: il robot parla
```

Far parlare il robot direttamente:

```bash
ros2 service call /aimdk_5Fmsgs/srv/PlayTts aimdk_msgs/srv/PlayTts "{tts_req: {text: 'Ciao', domain: 'test', trace_id: 't1', is_interrupted: true, priority_weight: 0, priority_level: {value: 6}}}"
```

Cosa fa ogni esempio e come lanciarlo: **`~/ESEMPI.md`** (aprite il file in VS Code, oppure
`less ~/ESEMPI.md` nel terminale). Più dettagli nei capitoli 4.6, 4.7 e 6 della documentazione.

---

## 5. Scrivere il vostro codice

Create la vostra cartella per il codice dentro `/home/studente`:

```bash
mkdir ~/<nome_cartella>
```

---

## 6. Visualizzare i dati con Foxglove

[Foxglove](https://foxglove.dev) mostra nel browser i dati del robot: camere, lidar, giunti,
modello 3D. Funziona in due parti: nel container gira un **bridge** che legge i topic ROS e li
manda in rete; dal browser del PC vi collegate al bridge.

### Avviare il bridge (nel container)

```bash
~/foxglove/run.sh
```

Lo script carica le definizioni dei messaggi del robot, pubblica il modello 3D (URDF) su
`/robot_description` e avvia il bridge sulla porta **8765**. Lasciate aperto il terminale; per
fermarlo `Ctrl+C`.

- Il bridge è in **sola lettura**: da Foxglove non si possono mandare comandi al robot.
- Non vengono trasmessi i topic troppo pesanti per la Wi-Fi (immagini non compresse, point cloud
  completa): usate le versioni `.../compressed` e `..._down_sampling`.
- **Una porta per persona:** se il bridge è già avviato da un altro studente, usate un'altra porta
  (`~/foxglove/run.sh 8766`, `8767`, …), altrimenti compare l'errore "address already in use".

### Collegarsi dal browser

1. Aprite <https://app.foxglove.dev> (Chrome o Edge) ed entrate con un account.
2. **Open connection** → **Foxglove WebSocket** → `ws://10.0.10.201:8765`
   (con la porta che avete scelto).
3. Aggiungete i pannelli con **Add panel**: *Image* per le camere, *Plot* o *Raw Messages* per
   giunti e IMU, *3D* per lidar e modello del robot.

### Modello 3D del robot

Nelle impostazioni del pannello **3D** (rotellina):

1. **Scene → Mesh up axis → Z-up**: senza, i pezzi del robot appaiono sparsi.
2. **Frame → Display frame → `pelvis`**.
3. **Custom layers → + → URDF**, Source = **Topic**, topic `/robot_description`.

Il modello si muove insieme al robot. Al primo collegamento serve qualche secondo per scaricare le mesh.