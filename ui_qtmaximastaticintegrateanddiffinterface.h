/********************************************************************************
** Form generated from reading UI file 'qtmaximastaticintegrateanddiffinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H
#define UI_QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtMaximaStaticIntegrateAndDiffInterface
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *outputLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QCheckBox *plainTextCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *respectEdit;
    QPushButton *diffButton;
    QPushButton *integrateButton;
    QLineEdit *formulaEdit;

    void setupUi(QWidget *QtMaximaStaticIntegrateAndDiffInterface)
    {
        if (QtMaximaStaticIntegrateAndDiffInterface->objectName().isEmpty())
            QtMaximaStaticIntegrateAndDiffInterface->setObjectName(QStringLiteral("QtMaximaStaticIntegrateAndDiffInterface"));
        QtMaximaStaticIntegrateAndDiffInterface->resize(552, 279);
        verticalLayout_2 = new QVBoxLayout(QtMaximaStaticIntegrateAndDiffInterface);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        outputLayout = new QVBoxLayout();
        outputLayout->setObjectName(QStringLiteral("outputLayout"));

        horizontalLayout->addLayout(outputLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        plainTextCheckBox = new QCheckBox(QtMaximaStaticIntegrateAndDiffInterface);
        plainTextCheckBox->setObjectName(QStringLiteral("plainTextCheckBox"));

        verticalLayout->addWidget(plainTextCheckBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(QtMaximaStaticIntegrateAndDiffInterface);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        respectEdit = new QLineEdit(QtMaximaStaticIntegrateAndDiffInterface);
        respectEdit->setObjectName(QStringLiteral("respectEdit"));

        horizontalLayout_2->addWidget(respectEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        diffButton = new QPushButton(QtMaximaStaticIntegrateAndDiffInterface);
        diffButton->setObjectName(QStringLiteral("diffButton"));
        diffButton->setEnabled(false);

        verticalLayout->addWidget(diffButton);

        integrateButton = new QPushButton(QtMaximaStaticIntegrateAndDiffInterface);
        integrateButton->setObjectName(QStringLiteral("integrateButton"));
        integrateButton->setEnabled(false);

        verticalLayout->addWidget(integrateButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        formulaEdit = new QLineEdit(QtMaximaStaticIntegrateAndDiffInterface);
        formulaEdit->setObjectName(QStringLiteral("formulaEdit"));
        formulaEdit->setEnabled(false);

        verticalLayout_2->addWidget(formulaEdit);


        retranslateUi(QtMaximaStaticIntegrateAndDiffInterface);

        QMetaObject::connectSlotsByName(QtMaximaStaticIntegrateAndDiffInterface);
    } // setupUi

    void retranslateUi(QWidget *QtMaximaStaticIntegrateAndDiffInterface)
    {
        QtMaximaStaticIntegrateAndDiffInterface->setWindowTitle(QApplication::translate("QtMaximaStaticIntegrateAndDiffInterface", "Form", 0));
        plainTextCheckBox->setText(QApplication::translate("QtMaximaStaticIntegrateAndDiffInterface", "Plain text", 0));
        label->setText(QApplication::translate("QtMaximaStaticIntegrateAndDiffInterface", "Respect to", 0));
        respectEdit->setText(QApplication::translate("QtMaximaStaticIntegrateAndDiffInterface", "x", 0));
        diffButton->setText(QApplication::translate("QtMaximaStaticIntegrateAndDiffInterface", "Diff", 0));
        integrateButton->setText(QApplication::translate("QtMaximaStaticIntegrateAndDiffInterface", "Integrate", 0));
    } // retranslateUi

};

namespace Ui {
    class QtMaximaStaticIntegrateAndDiffInterface: public Ui_QtMaximaStaticIntegrateAndDiffInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H
