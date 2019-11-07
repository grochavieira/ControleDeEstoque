/****************************************************************************
** Meta object code from reading C++ file 'telacadastrocliente.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Estoque/telacadastrocliente.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telacadastrocliente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TelaCadastroCliente_t {
    QByteArrayData data[11];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelaCadastroCliente_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelaCadastroCliente_t qt_meta_stringdata_TelaCadastroCliente = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TelaCadastroCliente"
QT_MOC_LITERAL(1, 20, 30), // "on_btnCadastrarCliente_clicked"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 33), // "on_txtNomeCliente_editingFini..."
QT_MOC_LITERAL(4, 86, 34), // "on_txtEmailCliente_editingFin..."
QT_MOC_LITERAL(5, 121, 37), // "on_txtTelefoneCliente_editing..."
QT_MOC_LITERAL(6, 159, 32), // "on_txtCepCliente_editingFinished"
QT_MOC_LITERAL(7, 192, 40), // "on_spnNumEnderecoCliente_edit..."
QT_MOC_LITERAL(8, 233, 36), // "on_txtUsuarioCliente_editingF..."
QT_MOC_LITERAL(9, 270, 34), // "on_txtSenhaCliente_editingFin..."
QT_MOC_LITERAL(10, 305, 43) // "on_txtConfirmarSenhaCliente_e..."

    },
    "TelaCadastroCliente\0on_btnCadastrarCliente_clicked\0"
    "\0on_txtNomeCliente_editingFinished\0"
    "on_txtEmailCliente_editingFinished\0"
    "on_txtTelefoneCliente_editingFinished\0"
    "on_txtCepCliente_editingFinished\0"
    "on_spnNumEnderecoCliente_editingFinished\0"
    "on_txtUsuarioCliente_editingFinished\0"
    "on_txtSenhaCliente_editingFinished\0"
    "on_txtConfirmarSenhaCliente_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaCadastroCliente[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TelaCadastroCliente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaCadastroCliente *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnCadastrarCliente_clicked(); break;
        case 1: _t->on_txtNomeCliente_editingFinished(); break;
        case 2: _t->on_txtEmailCliente_editingFinished(); break;
        case 3: _t->on_txtTelefoneCliente_editingFinished(); break;
        case 4: _t->on_txtCepCliente_editingFinished(); break;
        case 5: _t->on_spnNumEnderecoCliente_editingFinished(); break;
        case 6: _t->on_txtUsuarioCliente_editingFinished(); break;
        case 7: _t->on_txtSenhaCliente_editingFinished(); break;
        case 8: _t->on_txtConfirmarSenhaCliente_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TelaCadastroCliente::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TelaCadastroCliente.data,
    qt_meta_data_TelaCadastroCliente,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TelaCadastroCliente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaCadastroCliente::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TelaCadastroCliente.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TelaCadastroCliente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
