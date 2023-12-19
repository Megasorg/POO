#include <iostream>

class Lista {
protected:
    struct Node {
        int data;
        Node* next;

        Node(int data) : data(data), next(nullptr) {}
    };

    Node* head;
    int size;

public:
    Lista() : head(nullptr), size(0) {}

    void insere(int elemento) {
        Node* newNode = new Node(elemento);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int tamanho() {
        return size;
    }

    virtual int primeiro() {
        if (head != nullptr) {
            return head->data;
        }
        return -1;
    }

    virtual void remove() {
      if (head != nullptr) {
          Node* temp = head;
          head = head->next;
          delete temp;
          size--;
      }
    }
};

class Fila : public Lista {
private:
    Node* tail;

public:
    Fila() : Lista(), tail(nullptr) {}

    void insere(int elemento) {
        Node* newNode = new Node(elemento);
        if (head == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        size++;
    }

    void remove() {
        if (head != nullptr) {
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
            size--;
        }
    }

    int primeiro() {
        return Lista::primeiro();
    }
};

class Pilha : public Lista {
public:
    void insere(int elemento) {
        Lista::insere(elemento);
    }

    void remove()  {
        if (head != nullptr) {
            head = head->next;
            size--;
        }
    }

    int primeiro() {
        return Lista::primeiro();
    }
};

int main() {

    Lista lista;
    lista.insere(1);
    lista.insere(2);
    lista.insere(3);

    std::cout << "Lista:\n";
    std::cout << "Tamanho da Lista: " << lista.tamanho() << std::endl;
    std::cout << "Primeiro elemento: " << lista.primeiro() << std::endl;

    Fila fila;
    fila.insere(1);
    fila.insere(2);
    fila.insere(3);

    std::cout << "\nFila:\n";
    std::cout << "Tamanho da Fila: " << fila.tamanho() << std::endl;
    std::cout << "Primeiro da Fila: " << fila.primeiro() << std::endl;

    fila.remove();
    std::cout << "Removendo da Fila...\n";
    std::cout << "Tamanho da Fila: " << fila.tamanho() << std::endl;
    std::cout << "Novo primeiro elemento da Fila: " << fila.primeiro() << std::endl;

    Pilha pilha;
    pilha.insere(1);
    pilha.insere(2);
    pilha.insere(3);

    std::cout << "\nPilha:\n";
    std::cout << "Tamanho da Pilha: " << pilha.tamanho() << std::endl;
    std::cout << "Primeiro da Pilha: " << pilha.primeiro() << std::endl;

    pilha.remove();
    std::cout << "Removendo da Pilha...\n";
    std::cout << "Tamanho da Pilha: " << pilha.tamanho() << std::endl;
    std::cout << "Novo primeiro elemento da Pilha: " << pilha.primeiro() << std::endl;

    return 0;
}
