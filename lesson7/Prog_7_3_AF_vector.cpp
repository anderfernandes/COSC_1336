/**
 * Name: Anderson Fernandes
 * Date: December 9, 2018
 * Description: Programming Homework - December 3 (vector)
**/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

double mean(vector<double> v);
double stdDev(vector<double> v);
double var(vector<double> v);
double avgPower(vector<double> v);
double avgMagnitude(vector<double> v);
double zeroCross(vector<double> v);

int main()
{
  vector<double> a_nums, b_nums;
  double mean_A, mean_B, mean_diff;
  double stdDev_A, stdDev_B, stdDev_diff;
  double var_A, var_B, var_diff;
	double avgMag_A, avgMag_B, avgMag_diff;
	double avgPow_A, avgPow_B, avgPow_diff;
  double zeroCross_A, zeroCross_B, zeroCross_diff;

	ifstream finA, finB;
	ofstream fout;
  double val;

	finA.open("two_a.txt");
	finB.open("two_b.txt");
	fout.open("comparison.txt");

	while (finA >> val)
	{
		a_nums.push_back(val);
	}

  while (finB >> val)
	{
		b_nums.push_back(val);
	}

  cout << "statistic" << setw(20) << "two_a.txt" << setw(20) << "two_b.txt" << setw(20) << "% difference" << endl;
	fout << "statistic" << setw(20) << "two_a.txt" << setw(20) << "two_b.txt" << setw(20) << "% difference" << endl;
	cout << "---------------------------------------------------------------------------------------------" << endl;
	fout << "---------------------------------------------------------------------------------------------" << endl;

  // Mean
  mean_A = mean(a_nums);
  mean_B = mean(b_nums);
  mean_diff = ((mean_B - mean_A) / mean_A) * 100;
  cout << "mean" << setw(26) << mean_A << setw(20) << mean_B << setw(14) << mean_diff << endl;
	fout << "mean" << setw(26) << mean_A << setw(20) << mean_B << setw(14) << mean_diff << endl;

  // Standard Deviation
  stdDev_A = stdDev(a_nums);
  stdDev_B = stdDev(b_nums);
  stdDev_diff = ((stdDev_B - stdDev_A) / stdDev_A) * 100;
  cout << "standard deviation" << setw(10) << stdDev_A << setw(20) << stdDev_B << setw(16) << stdDev_diff << endl;
	fout << "standard deviation" << setw(10) << stdDev_A << setw(20) << stdDev_B << setw(16) << stdDev_diff << endl;
  
  // Variance
  var_A = var(a_nums);
  var_B = var(b_nums);
  var_diff = ((var_B - var_A) / var_A) * 100;
  cout << "variance" << setw(20) << var_A << setw(20) << var_B << setw(15) << var_diff << endl;
	fout << "variance" << setw(20) << var_A << setw(20) << var_B << setw(15) << var_diff << endl;

  // Average magnitude
	avgMag_A = avgMagnitude(a_nums);
	avgMag_B = avgMagnitude(b_nums);
	avgMag_diff = ((avgMag_B - avgMag_A) / avgMag_A) * 100;
	cout << "average magnitude" << setw(11) << avgMag_A << setw(20) << avgMag_B << setw(16) << avgMag_diff << endl;
	fout << "average magnitude" << setw(11) << avgMag_A << setw(20) << avgMag_B << setw(16) << avgMag_diff << endl;

  // Average Power
	avgPow_A = avgPower(a_nums);
	avgPow_B = avgPower(b_nums);
	avgPow_diff = ((avgPow_B - avgPow_A) / avgPow_A) * 100;
	cout << "average power" << setw(15) << avgPow_A << setw(19) << avgPow_B << setw(17) << avgPow_diff << endl;
	fout << "average power" << setw(15) << avgPow_A << setw(19) << avgPow_B << setw(17) << avgPow_diff << endl;

  // Zero Crossing
	zeroCross_A = zeroCross(a_nums);
	zeroCross_B = zeroCross(b_nums);
	zeroCross_diff = ((zeroCross_B - zeroCross_A) / zeroCross_A) * 100;
	cout << "zero crossing" << setw(10) << zeroCross_A << setw(19) << zeroCross_B << setw(22) << zeroCross_diff << endl;
	fout << "zero crossing" << setw(10) << zeroCross_A << setw(19) << zeroCross_B << setw(22) << zeroCross_diff << endl;

	finA.close();
	finB.close();
	fout.close();

	cin.ignore();
	cin.get();

	return 0;
}

// mean
double mean(vector<double> v) 
{

	double sum = 0;

	for (int jx = 0; jx < v.size(); jx++) {

		sum = sum + v[jx];
		
	}
	return sum / v.size();

}

// stdDev
double stdDev(vector<double> v) 
{

	double m = mean(v);
	double sum = 0;
	double diff;

	for (int jx = 0; jx < v.size(); jx++) {

		diff = m - v[jx];
		sum = sum + pow(diff, 2);

	}
	return sum / v.size();
}

// var
double var(vector<double> v)
{
  double m = mean(v);
  double sum = 0;

  for (int i = 0; i < v.size(); i++)
  {
    // mean minus each value, square result
    sum += m - pow(v[i], 2);
  }

  return sum / (v.size() - 1);
}

// avgPower
double avgPower(vector<double> v) 
{

	double sum = 0;
	for (int jx = 0; jx < v.size(); jx++) {


		sum = sum + pow(v[jx], 2);
	}
	return sum / v.size();

}


// avgMagnitude
double avgMagnitude(vector<double> v) 
{

	double sum = 0;
	for (int jx = 0; jx < v.size(); jx++) {


		sum = sum + fabs(v[jx]);
	}
	return sum / v.size();

}

// zeroCross
double zeroCross(vector<double> v)
{
  int numOfCrossings = 0;
  
  for (int i = 0; i < (v.size() - 1); i++)
  {
    if ((v[i] * v[i + 1]) < 0)
      numOfCrossings++;
  }

  return numOfCrossings;
}