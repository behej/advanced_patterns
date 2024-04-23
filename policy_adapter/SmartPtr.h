#ifndef _SMART_PTR_H_
#define _SMART_PTR_H_

using namespace std;

template <typename T>
class SmartPtr
{
public:
    explicit SmartPtr(T *p = nullptr) : m_p(p)
    {
        cout << "Ctor" << endl;
    }

    ~SmartPtr()
    {
        cout << "Dtor" << endl;
        delete m_p;
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
    SmartPtr(const SmartPtr &) = delete;
    SmartPtr &operator=(const SmartPtr &) = delete;
};

#endif // _SMART_PTR_H_
