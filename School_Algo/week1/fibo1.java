import java.util.Scanner;

public class fibo1 {
	static long fibo(int n) {
		if(n <= 1) {
			return n;
		} else {
			return fibo(n - 1) + fibo(n - 2);
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the number : ");
		int n = sc.nextInt();

		long st = System.currentTimeMillis();	// for get CPU time

		long f = fibo(n);
		System.out.println("f[" + n + "] = " + f);

		long et = System.currentTimeMillis();	// end of calculation
		System.out.print("time of calculation : " + (et - st) + " milliseconds");
		sc.close();
	}
}
