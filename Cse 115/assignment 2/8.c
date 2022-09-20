
#include<stdio.h>
#include<string.h>

// defining Patient structure
struct Patient{
    char Registration_Number[10];
    char Name[15];
    int age;
    char Gender[10];
    char Contact_Number[12];
    char Address[20];

    int Corona_status;
};

// this function adds the patient
void addPatient(struct Patient* data,int idx){
    printf("Enter Registration Number: ");
    scanf("%s",data[idx].Registration_Number);
    printf("Enter Patient's Name: ");
    scanf("%s",data[idx].Name);
    printf("Enter age: ");
    scanf("%d",&data[idx].age);
    printf("Enter Gender: ");
    scanf("%s",data[idx].Gender);
    printf("Enter Contact Number: ");
    scanf("%s",data[idx].Contact_Number);
    printf("Enter Address: ");
    scanf("%s",data[idx].Address);

    printf("Had corona in the past(Yes/No): ");
    char status[5];
    scanf("%s",status);
    if(strcmp(status,"Yes")==0)
        data[idx].Corona_status = 1;
    else
        data[idx].Corona_status = 0;
    printf("\nPatient added successfully\n");
}

// this function displays the patient who had corona
void displayPatients(struct Patient* data,int n){
    printf("\nList of Patient/s who had corona-");
    for(int i=0;i<n;i++){
        if(data[i].Corona_status){
            printf("\n\nRegistration Number : %s",data[i].Registration_Number);
            printf("\nPatient Name : %s",data[i].Name);
        }
    }
}

// this function deletes the patient
void deletePatient(struct Patient* data,int n){
    char Pname[15];
    printf("\nEnter Patient Name to be deleted: ");
    scanf("%s",Pname);
    int delIdx=-1;
    for(int i=0;i<n;i++){
        if(strcmp(Pname,data[i].Name)==0){
            delIdx = i;
            break;
        }
    }
    for(int i=delIdx;i<n-1;i++){
        struct Patient temp = data[i];
        data[i] = data[i+1];
        data[i+1] = temp;
    }
    printf("\nPatient Deleted Successfully\n");
}

// this function modifies the contact number and physician name
void modifyContactPhysicianName(struct Patient* data,int n){
    char registrationNumber[10];
    printf("\nEnter patient registration number to be modified: ");
    scanf("%s",registrationNumber);
    for(int i=0;i<n;i++){
        if(strcmp(registrationNumber,data[i].Registration_Number)==0){
            printf("Enter Contact Number: ");
            scanf("%s",data[i].Contact_Number);

            printf("\nData modified successfully\n");
            return;
        }
    }
    printf("\nRegistration Number not found\n");
}

// this function prints the menu
void printMenu(){
    printf("\n\n--------------MENU----------------");
    printf("\n1. Display names and registration number of all patients (who had corona in the past).");
    printf("\n2. Add patient information.");
    printf("\n3. Delete patient information.");
    printf("\n4. Modify contact number and physician_name");
    printf("\n5. Exit\n");
}

// main driver function
int main(){
    struct Patient data[50];
    int n;
    printf("Enter Number of patient: ");
    scanf("%d",&n);
    int nPatients=0;
    int option;
    printMenu();
    scanf("%d",&option);
    while(option!=5){
        switch (option){
        case 1:
            displayPatients(data,nPatients);
            break;
        case 2:
            if(nPatients>=n){
                printf("Cannot add more patients\n");
            }else{
                addPatient(data,nPatients);
                nPatients++;
            }
            break;
        case 3:
            deletePatient(data,nPatients);
            nPatients--;
            break;
        case 4:
            modifyContactPhysicianName(data,nPatients);
            break;
        }
        printMenu();
        scanf("%d",&option);
    }
    return 0;
}
