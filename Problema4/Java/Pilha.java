public class Pilha extends Lista {
    @Override
    public void insere(Object elemento) {
        super.insere(elemento);
    }

    @Override
    public void remove() {
        if (head != null) {
            head = head.next;
            size--;
        }
    }

    @Override
    public Object primeiro() {
        return super.primeiro();
    }
}
