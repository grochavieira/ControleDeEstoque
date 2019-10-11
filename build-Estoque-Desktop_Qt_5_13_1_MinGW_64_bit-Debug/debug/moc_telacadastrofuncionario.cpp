/****************************************************************************
** Meta object code from reading C++ file 'telacadastrofuncionario.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Estoque/telacadastrofuncionario.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telacadastrofuncionario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_telaCadastroFuncionario_t {
    QByteArrayData data[9];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_telaCadastroFuncionario_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_telaCadastroFuncionario_t qt_meta_stringdata_telaCadastroFuncionario = {
    {
QT_MOC_LITERAL(0, 0, 23), // "telaCadastroFuncionario"
QT_MOC_LITERAL(1, 24, 34), // "on_btnCadastrarFuncionario_cl..."
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 37), // "on_txtNomeFuncionario_editing..."
QT_MOC_LITERAL(4, 98, 38), // "on_txtEmailFuncionario_editin..."
QT_MOC_LITERAL(5, 137, 41), // "on_txtTelefoneFuncionario_edi..."
QT_MOC_LITERAL(6, 179, 40), // "on_txtUsuarioFuncionario_edit..."
QT_MOC_LITERAL(7, 220, 38), // "on_txtSenhaFuncionario_editin..."
QT_MOC_LITERAL(8, 259, 47) // "on_txtConfirmarSenhaFuncionar..."

    },
    "telaCadastroFuncionario\0"
    "on_btnCadastrarFuncionario_clicked\0\0"
    "on_txtNomeFuncionario_editingFinished\0"
    "on_txtEmailFuncionario_editingFinished\0"
    "on_txtTelefoneFuncionario_editingFinished\0"
    "on_txtUsuarioFuncionario_editingFinished\0"
    "on_txtSenhaFuncionario_editingFinished\0"
    "on_txtConfirmarSenhaFuncionario_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_telaCadastroFuncionario[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void telaCadastroFuncionario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<telaCadastroFuncionario *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnCadastrarFuncionario_clicked(); break;
        case 1: _t->on_txtNomeFuncionario_editingFinished(); break;
        case 2: _t->on_txtEmailFuncionario_editingFinished(); break;
        case 3: _t->on_txtTelefoneFuncionario_editingFinished(); break;
        case 4: _t->on_txtUsuarioFuncionario_editingFinished(); break;
        case 5: _t->on_txtSenhaFuncionario_editingFinished(); break;
        case 6: _t->on_txtConfirmarSenhaFuncionario_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject telaCadastroFuncionario::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_telaCadastroFuncionario.data,
    qt_meta_data_telaCadastroFuncionario,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *telaCadastroFuncionario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *telaCadastroFuncionario::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_telaCadastroFuncionario.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int telaCadastroFuncionario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
