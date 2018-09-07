# Bell-Polynomial

Program to find all the possible clustering arrangements from a given number of records.

# EXAMPLE-1
Sample Input/Output:
Input: Enter the number of records n: 3
Output: Total number of possible clustering arrangements is 5
Clustering arrangements with 1 cluster:
No. of clustering arrangements: 1
The clusters are: {{r1,r2,r3}}

Clustering arrangements with 2 clusters:
No. of clustering arrangements: 3
The clusters are: {{r1,r2},{r3}}, {{r1,r3},{r2}}, {{r2,r3},{r1}}

Clustering arrangements with 3 clusters:
No. of clustering arrangements: 1
The clusters are: {{r1},{r2},{r3}}

# EXAMPLE-2

Input: Enter the number of records n: 4
Output: Total number of possible clustering arrangements is 15

Clustering arrangements with 1 cluster:
No. of clustering arrangements: 1
The clusters are: {{r1,r2,r3,r4}}

Clustering arrangements with 2 clusters:
No. of clustering arrangements: 7
The clusters are: {{r1,r2,r3},{r4}}, {{r1,r2,r4},{r3}}, {{r1,r3,r4},{r2}}, {{r2,r3,r4},{r1}}, {{r1,r2},{r3,r4}},
{{r1,r3},{r2,r4}}, {{r2,r3},{r1,r4}}

Clustering arrangements with 3 clusters:
No. of clustering arrangements: 6
The clusters are: {{r1,r2},{r3},{r4}}, {{r1,r3},{r2},{r4}}, {{r1,r4},{r2},{r3}}, {{r2,r3},{r1},{r4}}, {{r2,r4},{r1},{r3}}, {{r3,r4},{r1},{ r2}}

Clustering arrangements with 4 clusters:
No. of clustering arrangements: 1
The clusters are: {{r1},{r2},{r3},{r4}}
