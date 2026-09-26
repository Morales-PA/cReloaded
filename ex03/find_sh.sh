find -name "*.sh" | awk -F'[/,.]' '{print $(NF-1)}'
