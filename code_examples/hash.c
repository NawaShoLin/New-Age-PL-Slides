#define KEY_LEN 80
#define TAB_SIZE 71

typedef struct Data{
    char key[KEY_LEN];
    int  value;
} Data;

typedef struct Bucket{
    Data data; Bucket* next;
} Bucket;

typedef struct HashTable{
    Bucket buckets[TAB_SIZE];
} HashTable;

int HashFunction(char key[]){
    int i, sum = 0;
    for(i = 0 ; key[i] != '\0' ; ++i)
        sum += key[i];
    return sum % TAB_SIZE;
}

void Push(HashTable* table, Data* data){
    int index = HashFunction(data.key);
    Bucket* ptr = &(table->buckets[index]);
    while(ptr && ptr->next){ ptr = ptr->next; }
    ptr->next = (Bucket*) malloc(sizeof(Bucket));
    ptr = ptr->next;
    ptr->next = NULL;
    ptr->data.value = data->value;
    strcpy(ptr->data.key, data->key);
}

Data* Find(HashTable* table, char key[]){
    int index = HashFunction(key);
    Bucket* ptr = table->buckets[index].next;
    while(ptr){
        if(strcmp(ptr->data.key, key) == 0)
            return &(ptr->data);
        ptr = ptr->next;
    }
    return NULL;
}

// int Delete(HashTable* table, char key[]){...}

