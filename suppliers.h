#ifndef SUPPLIERS_H
#define SUPPLIERS_H

#define MAX_SUPPLIERS 50

extern int supplier_ids[MAX_SUPPLIERS];
extern char supplier_names[MAX_SUPPLIERS][50];
extern char supplier_emails[MAX_SUPPLIERS][50];
extern char supplier_phones[MAX_SUPPLIERS][20];
extern char supplier_towns[MAX_SUPPLIERS][30];
extern int supplier_count;

void addSupplier();
void displaySuppliers();
void searchSupplier();
void compareSupplierLocation();
void supplierMenu();

#endif
