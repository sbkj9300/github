import java.io.*;

class sample5{
	public static void main(String[] args) throws IOException{
		System.out.println("科目１〜５の点数を入力してください。");
	
		BufferedReader br =
	 	 new BufferedReader (new InputStreamReader(System.in));
	 	 
	 	 String num1 = br.readLine();
	 	 String num2 = br.readLine();
	 	 String num3=br.readLine();
	 	 String num4=br.readLine();
	 	 String num5=br.readLine();
	 	 
	 	 
	 	 double J =Double.parseDouble(num1);
	 	 double M = Double.parseDouble(num2);
	 	 double E = Double.parseDouble(num3);
	 	 double S = Double.parseDouble(num4);
	 	 double A =Double.parseDouble(num5);
	 	 
	 	 
	 	 
	 	 double sum = M+J+E+S+A;
	 	 double av = sum/5;
	 	 
	 	 System.out.println("５科目の合計は"+(int)sum+"点です。");
	 	 System.out.println("５科目の平均は"+av+"点です。");
	 	 
	 	}
	}
	 	 