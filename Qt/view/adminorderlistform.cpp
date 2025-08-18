#include "adminorderlistform.h"
#include "ui_adminorderlistform.h"

AdminOrderListForm::AdminOrderListForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminOrderListForm) {
    ui->setupUi(this);

    // 각 위젯에 대한 헤더 설정 및 컬럼 개수 설정
    QStringList orderListHeaders;
    orderListHeaders << "상품명" << "상품ID" << "가격" << "카테고리" << "개수";

    // 전체 위젯
    ui->orderList->setColumnCount(orderListHeaders.size());
    ui->orderList->setHorizontalHeaderLabels(orderListHeaders);
    ui->orderList->setColumnWidth(0, 200);

    // 각 위젯에 대한 헤더 설정 및 컬럼 개수 설정
    QStringList orderClientListHeaders;
    orderClientListHeaders << "주문번호" << "주문자 ID";

    // 전체 위젯
    ui->orderClientList->setColumnCount(orderClientListHeaders.size());
    ui->orderClientList->setHorizontalHeaderLabels(orderClientListHeaders);
    ui->orderClientList->setColumnWidth(0, 60);
}

AdminOrderListForm::~AdminOrderListForm() {
    delete ui;
}
