for file in $(ls | grep ".txt"); do 
	mv "$file" "$(echo "$file" | sed 's/.txt/.html/g')"; 
done;
