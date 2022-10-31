import java.util.Arrays;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class P5_2{
    public static void main(String[] args) {
        String[] arrays = {"abc", "eclips", "visual"};
        Stream<String> stream = Arrays.stream(arrays);
        stream.forEach(System.out::println);

        IntStream istream = IntStream.range(1,5);
        
        istream.forEach(
            i -> {System.out.println(x);}
        );
    }
}