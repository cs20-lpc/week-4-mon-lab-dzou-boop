template <typename T>
LinkedList<T>::LinkedList()
: head(nullptr) { }

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& elem) {
    if (head == nullptr) {
        head = new Node(elem);
        this->length++;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new Node(elem);
        this->length++;
    }
}

template <typename T>
void LinkedList<T>::clear() {
    head = nullptr;
}

template <typename T>
T LinkedList<T>::getElement(int position) const {
    if (position>=0 && position<this->length) {
        Node* current = head;
        for (int i = 0; i < position; i++) {
            current = current->next;
        }
        return current->value;
    } else {
        throw string("Out of bounds");
    }
}

template <typename T>
int LinkedList<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
void LinkedList<T>::replace(int position, const T& elem) {
 if (position>=0 && position<this->length) {
        Node* current = head;
        for (int i = 0; i < position; i++) {
            current = current->next;
        }
        current->value = elem;
    } else {
        throw string("Out of bounds");
    }
}

template <typename T>
ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "List is empty, no elements to display.\n";
    }
    else {
        typename LinkedList<T>::Node* curr = myObj.head;
        while (curr != nullptr) {
            outStream << curr->value;
            if (curr->next != nullptr) {
                outStream << " --> ";
            }
            curr = curr->next;
        }
        outStream << endl;
    }

    return outStream;
}
