#include "MainForm.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define N 3
#define _USE_MATH_DEFINES
#include<math.h>
	using namespace std;
	typedef struct st{
		double T;
		double delt;
		double ep;
		double v;
		double F;
		double A;
		double k;
		double d;
		int id;
	} OPTION;
	using namespace std;
	using namespace System;
	using namespace System::Windows::Forms;

	[STAThread]
	double frequency(OPTION, double);
	double speed(OPTION, double);
	void oscillationPeriod(OPTION, FILE*, Courswork::MainForm^);
	void enterStruct(OPTION *, int);
	void main() {
	
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Courswork::MainForm^ form = gcnew Courswork::MainForm;
		OPTION data[N];
		enterStruct(data, N);
		FILE *out;
		out = fopen("output.out", "w");
		double temp, k, m, dk;
		oscillationPeriod(data[0], out, form);
		oscillationPeriod(data[1], out, form);
		oscillationPeriod(data[2], out, form);
		fclose(out);
		Application::Run(form);
	}

	double frequency(OPTION option, double t) {
		if (t <= option.T / 4) {
			return option.F+(4*option.A*t)/option.T;
		}
		else {
			if (t <= (3 * option.T) / 4) {
				return option.F + option.A - (t-option.T / 4)*(4*option.A)/option.T;
			}
			else {
				return option.F - option.A + (t - 3*option.T / 4)*(4 * option.A) / option.T;
			}
		}
	}
	double speed(OPTION option, double t) {
			return option.v*(1+option.k*cos(2*M_PI*t/option.T));
	}
	void enterStruct(OPTION * option, int n) {
		FILE *in;
		in = fopen("input.in", "r");
		if (in == 0)
		{
			puts("Файл input.in не открылся");
			exit(1);
		}
		for (int i = 0; i < n; i++) {
			fscanf(in, "%lf%lf%lf%lf%lf%lf%lf%lf", &option[i].T, &option[i].delt, &option[i].ep, &option[i].v, &option[i].F, &option[i].A, &option[i].k, &option[i].d);
			option[i].id = i + 100;
		}
		fclose(in);
	}
	void oscillationPeriod(OPTION option, FILE * out, Courswork::MainForm^ form) {
		double freq, k, spee, dk, inner ;
		for (double i = 0; i <= option.T + pow(10, -6); i += option.delt) {
			spee = speed(option, i);
			freq = frequency(option, i);
			inner = (3 * pow(option.d, 2)*option.ep*spee) / (2 * freq);
			dk = pow(inner, 1 / 3.0);
			if (inner < 0)
			{
				fprintf(out, "t = %lf frequency = %lf speed = %lf diameter = Invalid\n", i, freq, spee, dk);
			}
			else {
				fprintf(out, "t = %lf frequency = %lf speed = %lf diameter = %e\n", i, freq, spee, dk);
				form->addPoint(i, dk, option.id);
			}
		}
	}
