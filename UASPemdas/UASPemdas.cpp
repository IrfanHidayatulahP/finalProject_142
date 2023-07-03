#include <iostream>
using namespace std;

class MataKuliah {
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() {return 0;}
	virtual float cekKelulusan() { return 0; }
	virtual void input() { }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(int a) {
		this->activity = a;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(int e) {
		this->exercise = e;
	}

	float getExercise() {
		return exercise;
	}

	void settugasAkhir(int ta) {
		this->tugasAkhir = ta;
	}

	float gettugasAkhir() {
		return tugasAkhir;
	}
};

class Pemrogaman : public MataKuliah {
	int p;
	int a;
	int e;
	int ta;

	virtual float hitungNilaiAkhir() {
		cout << "Masukan Nilai Akhir: " << ta << endl;
		return 0;
	}	
	virtual float cekKelulusan() {
		if (ta >= 75)
			cout << "Selamat, Anda lulus matakuliah Pemrogaman dengan nilai akhir 75" << endl;
		else
			return 0;
	}

	void input() {
		cout << "Masukan nilai Presensi: ";
		cin >> p;
		setPresensi(p);

		cout << "Masukan Nilai Activity: ";
		cin >> a;
		setActivity(a);

		cout << "Masukan Nilai Excercise: ";
		cin >> e;
		setExercise(e);

		cout << "Masukkan Nilai Tugas Akhir: ";
		cin >> ta;
		settugasAkhir(ta);
	}
};


int main() {
	MataKuliah* mk;
	Pemrogaman p;

		mk = &p;
		mk->input();
		mk->hitungNilaiAkhir();
		mk->cekKelulusan();
}
