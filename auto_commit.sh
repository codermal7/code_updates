# files=(
#     "DailyUpdates/57-Insert-Interval.cpp" 
#     "DailyUpdates/2864. Maximum Odd Binary Number.cpp"
# )

# commit_messages=(
#     "Edited Insert-Interval.cpp"
#     "Edited Maximum Odd Binary Number.cpp"
# )

# # Loop through files and commit each one
# for i in "${!files[@]}"; do
#     git add "${files[$i]}"
#     git commit --date='2024-10-04' -m "${commit_messages[$i]}"
# done

# git push origin main


#!/bin/bash

files=(
    "DailyUpdates/57-Insert-Interval.cpp" 
    "DailyUpdates/2864. Maximum Odd Binary Number.cpp"
    "DailyUpdates/LC300 Longest Increasing Subsequence.cpp"
    "DailyUpdates/LC446 Arithmetic Slices II - Subsequence.cpp"
    "DailyUpdates/LC1026 Maximum Difference Between Node and Ancestor.cpp"
    # "code_updates/DailyUpdates/LC2385 Amount of Time for Binary Tree to Be Infected.cpp"
)

# Commit messages corresponding to each file
commit_messages=(
    "Edited z Insert-Interval.cpp"
    "Edited z Maximum Odd Binary Number.cpp"
    "Edited z Longest Increasing Subsequence.cpp"
    "Edited z Arithmetic Slices I| - Subsequence.cpp"
    "Edited z Maximum Difference Between Node and Ancestor.cpp"
    # "Edited z Amount of Time for Binary Tree to Be Infected.cpp"
)

# # Loop through files and commit each one
# for i in "${!files[@]}"; do
#     # Append a small comment to each file
#     echo "// Changed code ${i}" >> "${files[$i]}"

#     # Add the file to staging area
#     git add "${files[$i]}"

#     # Commit the changes with corresponding message
#     git commit --date='2024-10-07' -m "${commit_messages[$i]}"
# done

# # Push all commits at once
# git push origin anuj_commits # Replace <branch_name> with your branch




# YAHAN SE DATE RANGE VAALA HAI


start_date="2024-10-09"

# Loop through the date range (7 days: 2024-09-22 to 2024-09-28)
for i in {0..6}; do
    # Calculate the commit date (use ISO 8601 format)
    commit_date=$(date -v+"$i"d -j -f "%Y-%m-%d" "$start_date" +"%Y-%m-%dT%H:%M:%S")

    # Loop through files and append a small comment
    for file in "${files[@]}"; do
        echo "// Testing code for online compiler $commit_date" >> "$file"
    done

    # Add all files to the staging area
    git add "${files[@]}"

    # Commit all files with the corresponding message and manual commit date in RFC 2822 format
    GIT_COMMITTER_DATE="$(date -v+"$i"d -j -f "%Y-%m-%d" "$start_date" +"%a, %d %b %Y %H:%M:%S %z")" \
    git commit --date="$(date -v+"$i"d -j -f "%Y-%m-%d" "$start_date" +"%a, %d %b %Y %H:%M:%S %z")" -m "Small IDE Check"
done

# Push all commits to the repository
git push origin anuj_commits  # Replace <branch_name> with your branch name