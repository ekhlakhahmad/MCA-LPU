#include <iostream>
using namespace std;

#define N 10

class HashTable {
int arr[N];
int size;

public:
HashTable() {
size = 0;
for (int i = 0; i < N; i++) {
arr[i] = -1;
}
}

void insert(int value) {
if (size >= N) {
cout << "Error: Hash table is full" << endl;
return;
}
int index = value % N;
while (arr[index] != -1) {
index = (index + 1) % N;
}
arr[index] = value;
size++;
}

void display() {
for (int i = 0; i <N; i++)
{
if (arr[i] != -1)
{
    cout << "a[" << i << "]=" << arr[i] << endl;
}
}
}
};

int main() {
HashTable table;
cout<<"after cretion hash table"<<endl;
table.insert(5);
table.insert(25);
table.insert(26);
table.insert(35);

table.display();
return 0;
}