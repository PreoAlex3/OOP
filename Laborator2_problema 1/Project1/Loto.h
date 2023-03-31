class Loto
{
public:
	Loto();
	~Loto();
	void generare(int extras[]);
	void afisare(int extras[]);
	void SetStatus();
	int castig(int a[]);
private:
	int* status;
	int* extras;
};