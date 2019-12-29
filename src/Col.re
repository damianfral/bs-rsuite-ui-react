[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,

    ~componentClass: unit => React.element=?,

    ~lg: int=?,
    ~lgHidden: bool=?,
    ~lgOffset: int=?,
    ~lgPull: int=?,
    ~lgPush: int=?,

    ~md: int=?,
    ~mdHidden: bool=?,
    ~mdOffset: int=?,
    ~mdPull: int=?,
    ~mdPush: int=?,

    ~sm: int=?,
    ~smHidden: bool=?,
    ~smOffset: int=?,
    ~smPull: int=?,
    ~smPush: int=?,

    ~xs: int=?,
    ~xsHidden: bool=?,
    ~xsOffset: int=?,
    ~xsPull: int=?,
    ~xsPush: int=?
  ) =>
  React.element =
  "Col";

