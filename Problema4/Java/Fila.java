
public class Fila extends Lista {
    private Node tail;

    public Fila() {
        super();
        this.tail = null;
    }

    @Override
    public void insere(Object elemento) {
        Node newNode = new Node(elemento);
        if (head == null) {
            head = newNode;
        } else {
            tail.next = newNode;
        }
        tail = newNode;
        size++;
    }

    @Override
    public void remove() {
        if (head != null) {
            head = head.next;
            if (head == null) {
                tail = null;
            }
            size--;
        }
    }

    @Override
    public Object primeiro() {
        return super.primeiro();
    }
}