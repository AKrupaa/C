// do��czaj�c� pierwszy wektor na pocz�tku drugiego
extern int concat_begin(int first[], int size, int second[], int size2, int dest[], int size3);
//do��czaj�cej pierwszy wektor na koniec drugiego 
extern int concat_end(int first[], int size, int second[], int size2, int dest[], int size3);
//��cz�cej na zmian� elementy obu wektor�w, rozpoczynaj�c od pierwszego elementu pierwszego wektora 
extern int concat_zip(int first[], int size, int second[], int size2, int dest[], int size3);
extern int read_vector(int vec[], int size, int stop_value);
extern void display_vector(int vec[], int size);
