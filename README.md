# Đây là *quá trình* học git và github
Link hướng dẫn <https://gemini.google.com/share/e7f96398e597>

## Các bước đẩy file lên github
### Liên kết với github
#### Khởi động git my computer
- `git init` là lệnh tạo `.git` trong folder làm việc.
- Trước khi đẩy file lên github cần liên kết máy tính(my computer) với github:
    - `git remote add origin "url"` với url là link đến project trong github.
    - `git remote -v` để kiểm tra liên kết.
    - `git remote remove origin` để xoá remote. Sau khi chạy lệnh sẽ xoá kết nối.
    - `git remote rename origin "name"` sẽ thay đổi `origin` thành "name" đã đặt lại.

#### Các bước đẩy file từ *my computer* lên *github*
- Viết file
- add file
- commit 
- đẩy file lên

#### Add file
- Các lệnh kiểm tra và add file
    - Lệnh kiểm tra:
        - `git status`
    
    - Lệnh add file:
        - `git add name file`
        - `git add .` là add all file thay đổi từ lệnh `git status`

#### Lệnh commit
- Lệnh này để coment những thay đổi từ cũ qua mới để note dễ hiểu
    - Lệnh commit cơ bản và hay dùng:
        - `git commit -m "note"` là ghi chú 

#### Lệnh đẩy file lên hoặc lấy file về máy.
- Lệnh để nhân bản(sao chép) toàn bộ dự án trên github về my computer.
    - Lệnh đê đẩy dự án về máy cơ bản:
        - `git clone "pro_url"` với "pro_url" là link liên kết với project.
- Lệnh này để add file từ **github** lên **computer**
    - Lệnh add file cơ bản và hay dùng:
        - `git pull origin "branch"` là lệnh đẩy file về máy tính (branch là nhánh để lấy về).
- Lệnh này để add file từ **computer** lên **github** 
    - Lệnh add file cơ bản và hay dùng:
        - `git push origin "branch"` là lệnh đẩy file lên github (branch là nhánh để đẩy lên).


## Khi muốn xoá liên kết mật khẩu  
- Nhập lệnh để xoá pass `git config --global --unset credential.helper`
- Folder chứa `C:\Users\Administrator\.gitconfig`

## Đã thêm nhánh Dev01 
- Nhánh này có nhiệm vụ gì
    - Nếu lỗi sẽ dễ khắc phục
