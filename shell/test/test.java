import java.io.*;
class test{
	public static void main(String args[]) throws IOException{
		System.out.println("aiueo");
		String fileName = "test.txt";
		FileWriter fw = new FileWriter(fileName,true);
		fw.write("aiueo\n");
		fw.close();
	}

}
