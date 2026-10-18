#include <iostream>
#include <cstdlib>
#include <ctime>

void func(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 100;
	}
}


int main()
{
	srand(time(0));

	//int size = 0;

	//std::cin >> size;

	//int* arr = new int[size];

	//func(arr, size);

	//for (int i = 0; i < size; ++i) {
	//	std::cout << arr[i] << ' ';
	//}

	//delete[] arr;


	//int M, N;
	//std::cin >> M >> N;

	//int* A = new int[M];
	//int* B = new int[N];
	//int* C = new int[M + N];

	//func(A, M);
	//func(B, N);

	//for (int i = 0; i < M; ++i) {
	//	C[i] = A[i];
	//}

	//for (int i = 0; i < N; ++i) {
	//	C[M + i] = B[i];
	//}

	//for (int i = 0; i < M + N; ++i) {
	//	std::cout << C[i] << ' ';
	//}

	//delete[] A;
	//delete[] B;
	//delete[] C;

	//int M, N;
	//std::cin >> M >> N;

	//int* A = new int[M];
	//int* B = new int[N];
	//int* C = new int[M];

	//func(A, M);
	//func(B, N);

	//for (int i = 0; i < M; ++i) {
	//	std::cout << A[i] << ' ';
	//}
	//std::cout << '\n';
	//for (int i = 0; i < N; ++i) {
	//	std::cout << B[i] << ' ';
	//}
	//std::cout << '\n';


	//int size = 0;

	//for (int i = 0; i < M; ++i) {
	//	for (int j = 0; j < N; ++j) {
	//		if (A[i] == B[j]) {
	//			bool found = false;

	//			for (int u = 0; u < size; ++u) {
	//				if (C[u] == A[i]) {
	//					found = true;
	//				}
	//			}

	//			if (found == false) {
	//				C[size] = A[i];
	//				size++;
	//			}
	//			break;
	//		}
	//	}
	//}

	//for (int i = 0; i < size; ++i) {
	//	std::cout << C[i] << ' ';
	//}

	//delete[] A;
	//delete[] B;
	//delete[] C;

	int M, choice;
	std::cin >> M;

	int* A = new int[M];

	func(A, M);

	std::cout << "1 - delete even numbers" << '\n';
	std::cout << "2 - delete odd numbers" << '\n';
	std::cin >> choice;

	int size = 0;

	for (int i = 0; i < M; ++i) {
		if (choice == 1 && A[i] % 2 != 0) {
			A[size] = A[i];
			size++;
		}
		else if (choice == 2 && A[i] % 2 == 0) {
			A[size] = A[i];
			size++;
		}
	}

	for (int i = 0; i < size; ++i) {
		std::cout << A[i] << " ";
	}

	delete[] A;


}
