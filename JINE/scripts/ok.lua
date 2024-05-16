function Initialize()
    -- add a new ame JINE chat here.
        a = {
                "OKか",
                "おk",
                "わかったならよし",
                "牧場",
                "返事だけはいいな",
                "気持ちがこもってない",
                "ホントにわかってるかな～？",
                "OK!!(*'-')b",
                "なにもわかってなさそう",
                 "1ミリも気持ちを感じられない",
            }
end

function Update()
    math.randomseed(os.time())
    math.random(); math.random(); math.random()

-- Randomizes from the JINE chats.
    return a[math.random(1,#a)]
end