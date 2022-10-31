import java.io.BufferedWriter;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class P8_2{
    public static void main(String[] args) {
        Path path = Paths.get("/Users/kobayashiryoufutoshi/Desktop/内定者研修/0 JAVA/java/Java本格入門/8章/sample.txt");
        Path path2 = Paths.get("/Users/kobayashiryoufutoshi/Desktop/内定者研修/0 JAVA/java/Java本格入門/8章/sample2.txt");

        //サンプルファイル作成
        try(BufferedWriter writer = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {

            writer.append("test");
            writer.newLine();
            writer.append("test1");
        } catch(IOException ex) {
            System.err.println(ex);
        }

        //ファイルのコピー
        try{
            Files.copy(path, path2);
        } catch (IOException ex){
            System.err.println(ex);
        }
    }
}