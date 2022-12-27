#!/bin/bash



git add .

git status

echo -e "Please enter the Commit : "
read commit
echo "Your Commit is \"$commit\""

git commit -m "$commit"

git push
