# A Custom soffle keymap used primary for coding

## Installing qmk on debian based distros

```bash
# Install dependencies
sudo apt install -y git python3-pip

# Install the qmk
python3 -m pip install --user qmk

# Setup all the qmk programs required.
# Will require sudo to install some additional depencies
qmk setup
```

## Cloning the repos

After installing you can clone this repo into the soffle keymaps 
```bash
cd ~/qmk_firmware/keyboards/sofle/keymaps
git clone https://github.com/satjuh/sofle-keymap 
``` 

## Flashing a new firmware



