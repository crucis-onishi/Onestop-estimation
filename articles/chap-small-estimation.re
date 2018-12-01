= 見積もり依頼の基本（小規模Projectを発注する編）

== はじめに

発注者として、見積もり依頼を行う場合の基本的な流れについて述べる。小規模であるとはいっても必要な事項はプロジェクトの規模によらないし、むしろ基本的な内容を自分で処理する必要があるからテーマとしてはよいだろう。ただし、見積もり規模として、数万円から数十万円程度の規模を想定していることは前提とする。それ以上の規模になると、付帯する書類や打ち合わせ内容、手続きが増加するためである。

== 準備するもの

=== 見積もり仕様書
以下の項目について記載した、見積もり仕様書をつくる。定型フォーマットを作っておくとよい。

1. 仕様書番号

　任意だが、あると整理しやすい場合がある。

2. タイトル

　わかりやすい名前をつけるようにしたい。冗長にならないように。

3. 担当者・連絡先

　会社名、部署名、担当者名、連絡先として、メアド・電話番号等。

4. 案件の概要

　本仕様書は、「XXXの製作」に関する仕様を定める。

5. 詳細仕様

　目的、機能仕様、等を簡単に記載する。詳細は機能仕様書によるが、主要な項目についてはここに記載する。

//emlist[詳細仕様の記述例]{
　記述例1：ソフト等の制作
　目的：データ収集ソフトを制作する
　機能仕様：
　指定のマイコン（Arduino）を用い、一定周期ごとにアナログデータを収集するソフトを制作すること。
　収集仕様は以下の通り。
　　・収集点数　4点
　　・分解能　8bit
　　・収集周期　1秒
　　・出力形式　csv書き出し

　記述例2：機械加工品等
　組み立て図XXXに示す加工品を製作する。
　個数：10個
　材質：SUS　304
　加工精度：一般公差による。
　・加工精度例：長さ寸法に対する許容差（JISB0405-1991）による。
　・加工精度例：一般公差による。
　・加工精度例：xxの精度は、50mm±0.001mm以内、それ以外は一般公差とする。
//}

6.　見積もり範囲

見積もり範囲には、作業・納品物、支給部材、見積もり範囲外、貸与品等について整理して記載する。この記述に基づいて納品され、検収条件にも関わるので注意が必要である。

支給部材はおよび貸与品はオプションであり、必要に応じて記載する。特殊な素材、あるいは手持ち部材に追加工を依頼する場合など、支給品がある場合に記載する。

貸与品については、製作者の方で所有しないものが製作の前提となる場合などに記載する。高価・特殊な測定器、環境構築・機材が必要な場合などを貸与する場合に記載する。無償有償を明記する。

//emlist[見積もり範囲の記述例]{
　ソフト製作　一式　
　　電子データ（メール提出不可。CD書き込みの上提出のこと）
　完成図書　一式
　　取扱説明書を含むこと。
　見積もり範囲外
　　Arduinoボード
　貸与品
　　Arduinoに接続する温度センサ　1式。無償貸与とする。
//}

　7. 納期

  納期を書く。これくらいにはほしいななら希望納期として書く。厳守納期ならそれは明記必須。

　例：別途打ち合わせによる。希望納期は12月末とする。

　8. 検収条件

　検収の根拠となる事項について記載する。

　例：成果物（ソフト一式を含む完成図書）の納品、確認を以て検収とする。

　例：加工物の納品、数量および個数の確認を以て検収とする。

　9. その他

　仕様変更が生じる可能性が高い場合には、以下の文言を追加しておくと良い。

　詳細仕様は打ち合わせにより定める。打ち合わせにより定めた事項は本仕様書に優先する。ただし、打ち合わせ議事録は、受注者が制作し、発注者と共有すること。

=== 機能仕様書

PPT等で作る場合はフリーフォーマットで良いが、適宜図表等を利用して、打ち合わせをスムーズにできるとよい。

見積もり仕様書はあくまで契約手続き用、機能仕様書は技術的な中身、と分けて書くようにすると、書きやすいかも知れない。

基本的には見積もり仕様書の内容を踏襲し、技術的・機能面等、製作物・依頼内容についての詳細を記載する。

ソフト等の場合は、処理のフローや画面イメージが分かるものがあるとよい。処理フローの作成は少々面倒だが、そこを可視化することで、自分がほしいものをより具体化することができる。具体的な処理フローに落とすことで受注者との間で矛盾や仕様の齟齬がなくなり、製作時の手戻りがなくなる。

例：処理フローを明確にすることで、100kHzでサンプリングしたいが、ハードウエアの制約で10kHzでしかできない（そのためハード選定からやり直す）といった致命的な手戻りをなくすことができる。

例：機械加工での製作物では、ポンチ絵をつける。CADでの清書までは求めないが、図あると文字での説明とは比べ物にならないほど意思伝達がスムーズになる。必要な寸法や加工精度、加工内容について記載する。

== 打ち合わせ

メーカー担当者に見積もり仕様書、機能仕様書を送り、見積もり依頼を行う。仕様書が過不足なければ、受注者における疑問点、確認点が少なくなるので、打ち合わせにかかる工数が減る。

発注するということは、自分ではできないことを発注する、ということである。したがって実装や製作過程については基本的には先方の方が詳しい事が多い。逆に、作りたいものについては、発注者のイメージが正しいので、そのイメージを伝えつつ、作れる形に落とし込む、すり合わせる過程である。

誤解しやすいところについては受注者の理解を確認する必要がある。そのためには、必要な図面を引き直してもらうとか、処理フローを書き下してもらう等で確認及び認識の共通化をすることが有用となる場合がある。

なお、実装・製作が不可能な場合、折れるのか、作り方を変えるのか、他のできる人を探すのか、などを検討する。

コストと納期も勘案しなければならない。

また、無駄な打ち合わせをするために呼びつけるなどもってのほかである。発注者であるからといって、えらそうなことをしてはいけない。来てもらうにも、時間も交通費もかかるし、その移動時間でその人が本来片づけられた仕事が遅れるなどもある。ひざを突き合わせての打ち合わせの方が話が進むというのも理解できるところではあるが、だからと言って、発注前の事前打ち合わせならばなおさら、時間を取ってこちらへ来てもらうというという意識を頭の片隅に置いておこう。必要や人数によっては、発注者が先方に出向くことが効率的な場合は、そちらを選択しよう。繰り返しになるが、発注者様が小姓を呼び出す、などと考えてはいけない。（世の中には多そうだけど）

== 発注仕様書を作る
打ち合わせの結果を反映した発注仕様書を作成する。大きな変更点がなければ、見積もり仕様書と同じものになる。

検収条件等について、明記、確認を十分におこなうことが必要である。

発注仕様書を作る段階では、すでにメーカー/受注者の方で見積書ができていて、それを受領しており、受注者のアテがあるという状態になろうかと思う。ほぼ指名発注になるか。少額、小規模なので、「仕様事前打ち合わせ済」などを発注・契約担当部署に依頼すれば、受注者を指定して進めてくれる場合もあろう。

== 発注
金額、工数、スケジュールなどがわかる見積もり書をもらい、発注する。会社であれば、発注自体は契約担当者がいるはずなので、そこに任せることになるだろう。進捗を適宜確認し、疑問点があれば回答する。発注側として、進捗をチェックするとともに、途中で必要に応じて実装の中身が正しいか（意図した通りか）を確認する必要がある。

== 納品・検収
納品されたら、所定の機能が実装されているか、寸法などの仕様は適切か、という観点で確認する。あくまで契約なので、未達は修正を指示する。ただし、発注仕様書に記載がなかった場合、不備があった場合には、発注者責任なので追加費用を支払う必要がある。それを回避するための仕様書であり打ち合わせであることを忘れてはならない。

== 注意事項

発注者はおカネを払う側なので、一般に発注者のほうが力が上の場合が多い。だから、お願いも聞いてもらいやすいし、「よしなにやって」「追加お願い」といった（限度はあるが）無茶を聞いてもらえる場合も多いだろう。さらに、大きめの企業から（相対的に）小さい企業、あるいはフリーランスに発注するなどのように、会社・立場からの力の差があることも多い。

だからといって「無理難題を無理に飲ませる」といったことは当然やってはならない。法律的にも、下請法などで厳しく規制されているし、相手あっての仕事でもある。一回は飲んでもらえたとしても、次お断りされる、といった悲しいことになる。受容限界を超えるとそうなるのは当然であろう。

発注額を指定しての見積もり依頼は、受注額を指示することになるので、避けるべきである。しかし、予算が決まっている場合に、こちらの希望予算をまったく開示しないというのもマッチングミスが発生してしまう懸念がある。予算30万しかないところに、100万という見積もりが返ってくる場合などには、実施内容の縮減等含めて検討したいと考えるのは自然であろう。悩ましいものである。

また金額面でも、10万円以下は経費、10万～20万は少額固定資産、20万以上は設備といった税務上の制約、あるいは稟議・決裁のレベルなどの制約もあるかもしれない。これらについても、参考情報として共有しておけると、発注者側ネックでの遅れが生じづらくなるなどの理由でスムーズに進む可能性がある

== 最後に

見積もりを依頼する立場としての流れを簡単に記載した。この本全体として、受注者としての記事が多いので、逆の立場として（実体験をもとに）小規模なプロジェクトを発注する場合について記載した。発注者として考える必要があることもあるので、一助になれば幸いである。
