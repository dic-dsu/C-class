#include <stdio.h>
#include <cs50.h>

void carDataSaver();
void carDataReader();

int main(int argc, char const *argv[])
{
    int case_var;
    do{
        case_var = get_int("read 0\nwrite 1\ninput: ");
    } while (case_var != 0 && case_var != 1);
    
    switch (case_var)
    {
    case 0:
        carDataReader();
        break;
    case 1:
        carDataSaver();
        break;
    default:
        break;
    }
}


void carDataSaver(){
    string model = get_string("Enter the model: ");
    string brand = get_string("Enter the brand: ");
    int year = get_int("Enter the year: ");

    FILE *file;
    file = fopen("cars.txt", "a");
    fprintf(file, "%s,%s,%i\n", model, brand, year);
    fclose(file);

    carDataReader();
}

void carDataReader(){
    FILE *file;
    file = fopen("cars.txt", "r");
    char file_data[1000];
    while(fgets(file_data, 1000, file))printf("%s", file_data);
    fclose(file);
}