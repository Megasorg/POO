public class Main {
    public static void main(String[] args) {
        
        Lista lista = new Lista();
        lista.insere(1);
        lista.insere(2);
        lista.insere(3);

        System.out.println("Lista:");
        System.out.println("Tamanho da Lista: " + lista.tamanho());
        System.out.println("Primeiro elemento: " + lista.primeiro());

     
        Fila fila = new Fila();
        fila.insere(1);
        fila.insere(2);
        fila.insere(3);

        System.out.println("\nFila:");
        System.out.println("Tamanho da Fila: " + fila.tamanho());
        System.out.println("Primeiro elemento da Fila: " + fila.primeiro());

        fila.remove();
        System.out.println("Removendo elemento da Fila...");
        System.out.println("Tamanho da Fila após remoção: " + fila.tamanho());
        System.out.println("Novo primeiro elemento da Fila: " + fila.primeiro());

      
        Pilha pilha = new Pilha();
        pilha.insere(1);
        pilha.insere(2);
        pilha.insere(3);

        System.out.println("\nPilha:");
        System.out.println("Tamanho da Pilha: " + pilha.tamanho());
        System.out.println("Primeiro elemento da Pilha: " + pilha.primeiro());

        pilha.remove();
        System.out.println("Removendo elemento da Pilha...");
        System.out.println("Tamanho da Pilha após remoção: " + pilha.tamanho());
        System.out.println("Novo primeiro elemento da Pilha: " + pilha.primeiro());
    }
}
