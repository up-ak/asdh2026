
int main()
{
    int ids1[1600000];

    ids1[0] = 214312343243;
    ids1[1] = 234234324234;

    bool ids2[9999999999];

    int id = 1234567890;

    ids2[id] = true;

    if (ids2[id] == true)
    {
        cout << "Personi ekzistion";
    }

    bool ids3[1600000];

    int index = id % 1600000;

    ids3[index] = true;

    return 0;
}