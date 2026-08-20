import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leitor = new Scanner(System.in);
        double consumo, distancia, total_litros, preco_litro = 3.61;
        System.out.println("Programa para calculo do combustivel");
        System.out.println("Digite a distancia a ser percorrida: ");
        distancia = Double.parseDouble(leitor.nextLine());
        System.out.println("Digite o consumo medio do veiculo");
        consumo = Double.parseDouble(leitor.nextLine());
        total_litros = distancia / consumo;
        double custo = total_litros * preco_litro;
        System.out.println("Custo da viagem: " + custo);
        System.out.println("Total de Litros consumido: " + total_litros);
    
    }
}
