# find . -type f -name "*.sh"| sed "s/.sh//" |sed "s#.*/##"
# f;ind . -type f -name "*.sh" | rev #  awk -F '.hs ' '{print $NF}' <<< "$s" | rev
find . -type f -name '*.sh' | rev | cut -d / -f 1 | rev | cut  -d . -f 1

