#ifndef _SMART_PTR_H_
#define _SMART_PTR_H_

using namespace std;

template <typename T, typename DeletionPolicy>
class SmartPtr
{
public:
    /* Note: le 2e parametre par defaut n'est pas la construction d'un objet de type DeletionPolicy,
    mais l'operateur () sur le type du template.
    Pas besoin qu'une classe 'DeletionPolicy' existe, mais simplement que l'operateur () soit implementé
    pour le type qui sera passe en tant que DeletionPolicy.
    On peut s'appuyer implicitement sur l'operateur () du type declare.
    Ou on peut passer une fonction en parametre du constructeur.
    */
    explicit SmartPtr(T *p = nullptr, const DeletionPolicy &deletion_policy = DeletionPolicy()) : m_p(p), m_deletion_policy(deletion_policy)
    {
        cout << "Ctor" << endl;
    }

    ~SmartPtr()
    {
        cout << "Dtor" << endl;
        m_deletion_policy(m_p);
    }

    T *operator->()
    {
        return m_p;
    }

    const T *operator->() const
    {
        return m_p;
    }

    T &operator*()
    {
        return *m_p;
    }

    const T &operator*() const
    {
        return *m_p;
    }

private:
    T *m_p;
    DeletionPolicy m_deletion_policy;
    SmartPtr(const SmartPtr &) = delete;
    SmartPtr &operator=(const SmartPtr &) = delete;
};

#endif // _SMART_PTR_H_
