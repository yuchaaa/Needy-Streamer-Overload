function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "泣くなバカタレ！！",
                "あめちゃんも泣こうかな ぴえん",
                "腹立つ顔しやがって！",
                "殴るぞ！",
                "泣けばいいと思ってるのか！？",
                "ウザっ",
                "むかつく！",
                "（；；）",
                "泣けば済むもんじゃないんやで？",
                 "うぜーーーーーーーー",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end