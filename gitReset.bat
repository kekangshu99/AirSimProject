cd %~dp0
git fetch --all
git reset --hard main
git pull
git lfs pull
PAUSE