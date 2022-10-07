$(".MuiTable-root.jss641>tbody")[0]
trs = a.getElementsByTagName('tr')
s = ""
for (i = 0; i < trs.length; i++) {
    tr = trs[i];
    tds = tr.getElementsByTagName('td');

    td2 = tds[1].getElementsByTagName('div')[1].innerHTML
    s += td2 + ','

    td3 = tds[2].getElementsByTagName('div')[1].getElementsByTagName('a')[0].innerHTML
    s += td3 + ','

    td4 = tds[3].getElementsByTagName('div')[1].innerHTML
    s += td4 + ','

    td5 = tds[4].getElementsByTagName('div')[1].innerHTML
    s += td5 + ','

    td6 = tds[4].getElementsByTagName('div')[1].innerHTML
    s += td6

    s += "\n"
}

console.log(s)