package javaalgo;

import java.util.ArrayList;
import java.util.Scanner;

public class Solution_8673 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int T = sc.nextInt();

		for (int tc = 1; tc <= T; tc++) {
			int k = sc.nextInt();
			int n = 1;
			for (int a = 0; a < k; a++) {
				n *= 2;
			}

			ArrayList<Integer> list = new ArrayList<>();

			for (int i = 0; i < n; i++) {
				int num = sc.nextInt();
				list.add(num);
			}
			int total = 0;
			while (true) {
				if (list.size() == 1) {
					break;
				}
				for (int i = 0; i < n; i++) {
					if (list.get(i) < list.get(i + 1)) {
						total += (list.get(i + 1) - list.get(i));
						list.remove(i);
					} else if (list.get(i) > list.get(i + 1)) {
						total += (list.get(i) - list.get(i + 1));
						list.remove(i + 1);
					}

					n = list.size();
				}
			}

			System.out.println("#" + tc + " " + total);
		}
	}
}
