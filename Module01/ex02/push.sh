#!/bin/bash



git add .

echo -e "Please enter the Commit : "
read commit
echo "Your Commit is \"$commit\""

git commit -m "$commit"

@git push

echo "\33[0;32mDone\33[0m"
