import java.io.*;
import java.util.*;

public class Result {
    public static void main(String[] args) throws IOException {
            File fw= new File("GB.txt");
            fw.createNewFile();
            long ti=System.currentTimeMillis();
            FileWriter fwrite=new FileWriter(fw);
            
            for(int i=0;i<5;i++)
                    {
                    FileReader fr=new FileReader(new File("test.txt"));
                    int c;
                    while((c=fr.read())!=-1)
                            {fwrite.write(c);
                                }
                    fr.close();
                    System.out.println(System.currentTimeMillis()-ti);
                    }
    }
}