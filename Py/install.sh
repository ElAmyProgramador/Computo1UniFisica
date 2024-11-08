#! /bin/sh

# antes que nada debes darle permiso de ejecución con chmod +x intall.sh
echo "Instalar pipx (en caso de ya contar con el este no lo instalará)"
sudo zypper install python311-pipx
echo "Instalación de vpython"
pipx install vpython --include-deps
# usualmente lo tienen instalado, pero en caso de que no se instalaran matplotlib y numpy, en a teoria deberian servir sin problema con pip
pip install numpy matplotlib
