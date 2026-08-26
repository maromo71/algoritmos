public record ItemNota(String produto, int quantidade, double precoUnitario) {
    //metodo para calcular o preco subtotal
    public double calcularSubTotal(){
        return quantidade * precoUnitario;
    }
}
