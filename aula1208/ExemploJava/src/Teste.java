import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class Teste {
    static List<ItemNota> itens = new ArrayList<>();
    public static void main(String[] args) {
        Integer[] values = { 22, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.printf("Valores: %s \n", Arrays.asList(values));
        System.out.printf("Valores ordenados: %s \n",
                Arrays.stream(values)
                        .sorted()
                        .collect(Collectors.toList()));
        //Criar uma lista para guardar os valores maiores que 5
        var maioresQue5 =
                Arrays.stream(values)
                        .filter(value -> value > 5)
                        .sorted()
                        .collect(Collectors.toList());
        System.out.printf("Valores maiores que 5: %s%n", maioresQue5);
        var pares =
                Arrays.stream(values)
                        .filter(v -> v % 2 == 0)
                        .sorted()
                        .collect(Collectors.toList());
        System.out.printf("Valores pares: %s%n", pares);
        itens.add(new ItemNota("coca", 100, 3.4));
        itens.add(new ItemNota("fanta", 100, 3.5));
        itens.add(new ItemNota("barbeador", 100, 3));
        itens.add(new ItemNota( "bola", 5, 50));
        var produtos = Collections.unmodifiableList(itens);
        var totalNota = itens.stream()
                .mapToDouble(ItemNota::calcularSubTotal)
                .sum();
        System.out.println("Total Nota: " + totalNota);
    }
}
