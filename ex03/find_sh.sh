find . -type f -name '*.sh' -print | sed 's/\.sh//g' | rev | cut -d/ -f1 | rev
