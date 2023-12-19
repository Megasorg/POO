public class Lista {
    protected Node head;
    protected int size;

    public Lista() {
        this.head = null;
        this.size = 0;
    }

    public void insere(Object elemento) {
        Node newNode = new Node(elemento);
        newNode.next = head;
        head = newNode;
        size++;
    }

    public int tamanho() {
        return size;
    }

    public Object primeiro() {
        if (head != null) {
            return head.data;
        }
        return null;
    }

    public void remove() {
      if (head != null) {
          Node temp = head;
          head = head.next;
          temp = null;
          size--;
      }
    }

    protected static class Node {
        Object data;
        Node next;

        Node(Object data) {
            this.data = data;
            this.next = null;
        }
    }
}