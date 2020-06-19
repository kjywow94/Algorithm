package javaalgo;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.ObjectInputStream.GetField;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Solution_8658 {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int T = Integer.parseInt(br.readLine());

		for (int tc = 1; tc <= T; tc++) {
			int max = -987654321;
			int min = 987654321;
			StringTokenizer st = new StringTokenizer(br.readLine());
			StringBuilder sb = new StringBuilder();
			ArrayList<String> slist = new ArrayList<>();
			for(int i = 0; i<10; i++){
				int total = 0;
				String s = st.nextToken();
				
				slist.add(s);
				
			}
			sb.append("#"+ tc + " ");
			for(int j = 0; j < 10; j++){
				int total = 0;
				int len = slist.get(j).length();
				
				ArrayList<Integer> list = new ArrayList<>();
				
				for(int k = 0; k < len; k++){
					list.add(Integer.parseInt(slist.get(j).substring(k, k+1))); 
				}
				
				for(int o = 0; o < list.size(); o++){
					total += list.get(o);
				}
				
				max = Math.max(max, total);
				min = Math.min(min, total);
				
			}
			sb.append(max + " " + min);
			
			System.out.println(sb.toString());
		}
	}
}
